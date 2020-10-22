import os
import difflib
import filecmp
import subprocess
dir_name=os.getcwd()
dir_name=dir_name+'/Submissions'
extension = ".cpp"
path = os.getcwd()
print(path)
file_path= path+'/one_passed'
if not os.path.exists(file_path):
    os.mkdir(file_path)
file_path= path+'/all_passed'
if not os.path.exists(file_path):
    os.mkdir(file_path)
file_path= path+'/compilation_error'
if not os.path.exists(file_path):
    os.mkdir(file_path)
file_path= path+'/none_passed'
if not os.path.exists(file_path):
    os.mkdir(file_path)
os.chdir(dir_name)
for item in os.listdir(dir_name):
    if item.endswith(extension):
        #enter the path for simplecpp
        if os.system("/home/apoorva/repo/Raj/simplecpp/s++ "+item) == 0:
            passed=0
            subprocess.call(["./a.out <../Input/1 >out.txt"], shell=True)
            with open('out.txt','r') as f:
                d=[line.strip() for line in f if line.strip()]
            with open('../Output/1','r') as f:
                e=[line.strip() for line in f if line.strip()]
            if len(d)==len(e):
                fg=0
                for a,b in zip(d,e):
                    if a!=b:
                        fg=1
                        break
                if fg==0:
                    passed+=1
                    
            subprocess.call(["./a.out <../Input/2 >out.txt"], shell=True)
            with open('out.txt','r') as f:
                d=[line.strip() for line in f if line.strip()]
            with open('../Output/2','r') as f:
                e=[line.strip() for line in f if line.strip()]
            if len(d)==len(e):
                fg=0
                for a,b in zip(d,e):
                    if a!=b:
                        fg=1
                        break
                if fg==0:
                    passed+=1
                    
            subprocess.call(["./a.out <../Input/2 >out.txt"], shell=True)
            with open('out.txt','r') as f:
                d=f.readlines()
            with open('../Output/2','r') as f:
                e=f.readlines()
            if len(d)==len(e):
                fg=0
                for a,b in zip(d,e):
                    if a!=b:
                        fg=1
                        break
                if fg==0:
                    passed+=1
                    
            if passed==2:
                source= dir_name+'/'+item
                dest= path+'/all_passed/'+item
                os.rename(source,dest)
            elif passed==0:
                source= dir_name+'/'+item
                dest= path+'/none_passed/'+item
                os.rename(source,dest)
            else:
                source= dir_name+'/'+item
                dest= path+'/one_passed/'+item
                os.rename(source,dest)
            os.remove('out.txt')
        else:
            print ("Compilation errors")
            source= dir_name+'/'+item
            dest= path+'/compilation_error/'+item
            os.rename(source,dest)

