#Executing all the tasks.

all: DifusionTemperatura.c

Resultados_hw4.pdf: Resultados_hw4.tex Figure-*.pdf
	latexmk -pdf -pdflatex="pdflatex -interaction=monostopmode" -use-make $<

Figure_*.pdf: Plots_Temperatura.py Cases.dat 
	python $<

Cases.dat: DifusionTemperatura.x
	./DifusionTemperatura.x > Cases.dat

DifusionTemperature: DifusionTemperatura.c
	cc DifusionTemperatura.c -lm -o DifusionTemperatura.x
