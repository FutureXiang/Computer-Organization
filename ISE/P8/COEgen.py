import sys


source = sys.argv[1]
source_hdl = sys.argv[2]
target = sys.argv[3]

code = []
handler = []


with open(source, 'r') as f:
    while(True):
        try:
            now = f.readline()
            if(now==''):
                break
            code.append(now.strip())
        except:
            break
    
with open(source_hdl, 'r') as f:
    while(True):
        try:
            now = f.readline()
            if(now==''):
                break
            handler.append(now.strip())
        except:
            break

with open(target, 'w') as f:
    f.write("memory_initialization_radix=16;\nmemory_initialization_vector=\n")
    for ins in code:
        f.write(ins+',\n')
    for i in range(1120-len(code)):
        f.write("00000000,\n")
    for ins in handler:
        f.write(ins+',\n')
    f.write("00000000;\n")