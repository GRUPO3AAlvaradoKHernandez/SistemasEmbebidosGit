varA=4   #ingrese primera variable
varB=3   #ingrese segunda variable

if type(varA) is str and type(varB) is str:
    print('String involucrado')

if type(varA) is int or type(varA) is float and type(varB) is int or type(varB) is float:
        if varA > varB:
            print('Más grande')
        if varA == varB:
            print('Igual')
        if varA < varB:
            print('Más pequeño')