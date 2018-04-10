primera: grafica1.png
grafica1.png: ecDiferenciales.txt
	python grafica.py
ecDiferenciales.txt: ecDiferenciales
	C++ ecDiferenciales.cpp -o ecDiferenciales
	./ecDiferenciales > ecDiferenciales.txt
segunda: grafica2.png grafica3.png
grafica2.png: ecDiferenciales2.txt
		python grafica2.py
ecDiferenciales2.txt: ecDiferenciales2
		C++ ecDiferenciales2.cpp -o ecDiferenciales2
		./ecDiferenciales2 > ecDiferenciales2.txt
