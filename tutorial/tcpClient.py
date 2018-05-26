#!/usr/bin/env python3

import socket

def Main():
    host = '127.0.0.1'
    port = 5555

    s = socket.socket()
    s.connect((host,port))
    message = input("> ")
    while message != 'q':
        s.send(message.encode('utf-8'))
        data = s.recv(1024).decode('utf-8')
        print("Received message: "+data)
        message = input("> ")
    s.close()
    
if __name__ == '__main__':
    Main()
