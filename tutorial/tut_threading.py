#!/usr/bin/env python3

import threading
import time

tLock = threading.Lock()
def timer(name,delay,repeat):
    print("Thread "+name+" started!")
    print(name+" locked")
    tLock.acquire()
    while repeat>0:
        time.sleep(delay)
        print(name+": "+str(time.ctime(time.time())))
        repeat -= 1
    tLock.release()
    print(name+" unlocked")
    print("Timer: "+name+" is completed!")
def Main():
    t1 = threading.Thread(target=timer,args=("Th1",2,7))
    t2 = threading.Thread(target=timer,args=("Th2",2,1))
    t3 = threading.Thread(target=timer,args=("Th3",2,9))
    t4 = threading.Thread(target=timer,args=("Th4",2,33))
    t4.setDaemon(True)

    t1.start()
    t2.start()
    t3.start()
    t4.start()

    print("Main completed!")
class AsyncThread(threading.Thread):
    def __init__(self, text, out):
        threading.Thread.__init__(self)
        self.text = text
        self.out = out
    def run(self):
        file = open(self.out,"a")
        file.write(self.text+"\n")
        file.close()
        time.sleep(3)
        print("Writing completed!")
def Main2():
    message = input("Please enter text: ")
    t = AsyncThread(message,"outt")
    t.start()
    print("Thread starts here!")
    t.join()
    print("Thread ends here!")

if __name__ == '__main__':
    Main()
