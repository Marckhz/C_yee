import os
import sys

def foo(values):


    vector = []

    for element in list(values):
        if element.isnumeric():
            vector.append(int(element))
        
    return vector

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

    while True:
        r,w = os.pipe()
        lista = foo( sys.argv[1] )
        #newpid  = False
        half = len(lista) //2
        first_half = lista[:half]
        add_half = sum(first_half)
        newpid = os.fork()
        if newpid == 0:
            child(lista,half, r, w )
        else:
            os.close(w)
            r = os.fdopen(r)
            str = r.read()
            print("el padre sumo ", add_half, os.getpid() )
            pids = (os.getpid(), newpid)
            print("parent %d, child: %d" % pids)
            print("el hijo sumo" , str ) 
        user = input("q for quit ")
        if user == 'q':
            break
parent()

    


