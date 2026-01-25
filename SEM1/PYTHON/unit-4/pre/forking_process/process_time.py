from multiprocessing import Process
import os
import time

def child_task():
    time.sleep(5)
    print('child task after 1 second')
    print(f'child process id: {os.getpid()} from parent {os.getppid()   }')

if __name__ == '__main__':
    print('parent start immediatley')
    print(f'parent ID : {os.getpid()}')
    p=Process(target=child_task)
    p.start()
    print(f'parent created child ID: {p.pid}')
    print('parent is waiting ')
    p.join()
    print('parent completed after child')