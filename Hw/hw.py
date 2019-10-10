import os
import sys
import fileinput
import re

def file_(file):
   

   clean = False 
   for line in file:
      replace = line.replace('\n','')
      split = replace.split(',')
      print(split) 
      clean = [int(x) for x in split ] 
   print(clean) 

   return clean


def foo(values):

    vector = values.split(',')
    print("vector recibido > ",  vector)
    clean_vector = []

    for element in vector:
       clean_vector.append(int ( element) ) 
    return clean_vector

def child(lista,half,r, w ):
    
    os.close(r)
    second_half = lista[half:]
    other_half = sum(second_half)
    print("El hijo sumo > ", other_half, os.getpid() )
    s = str(other_half) 
    w = os.fdopen(w,'w')
    w.write(s)
    w.close()
    os._exit(0)
    

def parent():
    print("hola")	

    while True:
        r,w = os.pipe()
        try:
          lista = foo( sys.argv[1] )
        except:
          pass
        finally:
          try:
             lista = file_(fileinput.input() )
          except:
           pass
        #newpid  = False
        half = len(lista) //2
        first_half = lista[:half]
        add_half = sum(first_half)
        newpid = os.fork()
        if newpid == 0:
            child(lista,half, r, w )
        else:
            os.close(w)
            r = os.fdopen(r, 'r')
            str = r.read()
            print("el padre sumo ", add_half, os.getpid() )
            pids = (os.getpid(), newpid)
            print("parent %d, child: %d" % pids)
            print("el hijo sumo" , str )
            print("suma total  > ", int(str) + add_half)
            break
        user = input("q for quit ")

parent()

    


