#! /usr/bin/python

import smtplib

from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.MIMEBase import MIMEBase
from email.MIMEText import MIMEText
from email import Encoders

# me == my email address
# you == recipient's email address
gmail_user = 'lukasbe6@wp.pl'
gmail_pwd = 'lukas123'
subject = 'HEY'
text = 'Some text here'
you = "bestry.lukasz@gmail.com"

# Create message container - the correct MIME type is multipart/alternative.
msg = MIMEMultipart('alternative')
msg['Subject'] = "Try"
msg['From'] = gmail_user
msg['To'] = you

# Create the body of the message (a plain-text and an HTML version).
text = "Hi!\nHow are you?\nHere is the link you wanted:\nhttp://www.python.org"
html = """\
<html>
  <head></head>
  <body>
	<p>Hi!<br>
	   How are you?<br>
	   Here is the <a href="http://www.python.org">link</a> you wanted.
	</p>
  </body>
</html>
"""

# Record the MIME types of both parts - text/plain and text/html.
part1 = MIMEText(text, 'plain')
part2 = MIMEText(html, 'html')

# Attach parts into message container.
# According to RFC 2046, the last part of a multipart message, in this case
# the HTML message, is best and preferred.
msg.attach(part1)
msg.attach(part2)
print "Start"
# Send the message via local SMTP server.
s = smtplib.SMTP_SSL('smtp.wp.pl:465')
# sendmail function takes 3 arguments: sender's address, recipient's address
# and message to send - here it is sent as one string.
print "1"
s.ehlo()
print "2"
s.login(gmail_user, gmail_pwd)
print "3"
s.sendmail(gmail_user,you, msg.as_string())
print "4"
s.close()
print "5"
