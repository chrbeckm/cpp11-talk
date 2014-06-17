
build/main.pdf: main.tex
	lualatex --shell-escape $^

