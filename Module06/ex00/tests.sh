make fclean && make silent
./convert -
./convert .
./convert f

echo "Messing with parsing, should all be invalid:"
./convert
./convert string
./convert ff
./convert -.
./convert .0
./convert 0.
./convert -.0
./convert -.0f
./convert -.f
./convert -0.0fg
./convert -0.0ff
./convert -0.0f0
./convert .f
./convert f-
./convert -f
./convert -a
./convert -0.
./convert --
./convert --0
./convert 0.f
./convert -a.3
./convert a.3
./convert -.3
./convert ..0
./convert 0.0.0

echo "Rest are valid:"

echo "CHARS:"
./convert a
./convert \*

echo "INTS:"
./convert 0
./convert 42
./convert +42
./convert -42
./convert -0

echo "DOUBLES:"
./convert 0.0
./convert +42.0
./convert 42.0
./convert -42.0
./convert -0.0
./convert 0.42
./convert 42.42
./convert +42.42
./convert -42.42
./convert -0.42
./convert -inf
./convert inf
./convert +inf
./convert nan

echo "FLOATS:"
./convert 0.0f
./convert +42.0f
./convert 42.0f
./convert -42.0f
./convert -0.0f
./convert 0.42f
./convert +42.42f
./convert 42.42f
./convert -42.42f
./convert -0.42f
./convert -inff
./convert inff
./convert +inff
./convert nanf


echo "Done.\n"