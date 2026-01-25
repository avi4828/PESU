
from multiprocessing import Process
import os
def child_activity():
    print('child process running:')
    print(f'(Child PID: {os.getpid()})')
    print(f'(Parent PID: {os.getppid()})')

if __name__ == '__main__':
    # mandatory for windows operating system in prevents infinite process creation
    print('Before start of process:')
    p=Process(target=child_activity)
    # a process object is created the child entry function id child_activity
    p.start()
    # a new os process is started python interpreter is started for this process child_activity begins execution in the child
    print(f'Parent Process with id :{os.getpid()}')
    print(f'Parent created chlid ID {p.pid}')
    p.join()
    # parent waits here execution is blocked until chlid exits 
    print('parent finshed after join')
    print(f'(Child PID: {os.getpid()})')
    print(f'(Parent PID: {os.getppid()})')
