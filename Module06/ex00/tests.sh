make fclean && make silent
echo "./convert -"
./convert -
echo "./convert ."
./convert .
echo "./convert f"
./convert f
echo "./convert +"
./convert +

echo "Messing with parsing, should all be invalid:\n"
echo "./convert"
./convert
echo "./convert string"
./convert string
echo "./convert ff"
./convert ff
echo "./convert -."
./convert -.
echo "./convert .0"
./convert .0
echo "./convert 0."
./convert 0.
echo "./convert -.0"
./convert -.0
echo "./convert -.0f"
./convert -.0f
echo "./convert -.f"
./convert -.f
echo "./convert -0.0fg"
./convert -0.0fg
echo "./convert -0.0ff"
./convert -0.0ff
echo "./convert -0.0f0"
./convert -0.0f0
echo "./convert .f"
./convert .f
echo "./convert f-"
./convert f-
echo "./convert -f"
./convert -f
echo "./convert -a"
./convert -a
echo "./convert -0."
./convert -0.
echo "./convert --"
./convert --
echo "./convert --0"
./convert --0
echo "./convert ++0"
./convert ++0
echo "./convert -+0"
./convert -+0
echo "./convert +-0"
./convert +-0
echo "./convert 0.f"
./convert 0.f
echo "./convert -a.3"
./convert -a.3
echo "./convert a.3"
./convert a.3
echo "./convert -.3"
./convert -.3
echo "./convert ..0"
./convert ..0
echo "./convert 0.0.0"
./convert 0.0.0

echo "Rest are valid:\n"

echo "CHARS:\n"
echo "./convert a"
./convert a
echo "./convert \*"
./convert \*

echo "INTS:\n"
echo "./convert 0"
./convert 0
echo "./convert 127"
./convert 127
echo "./convert 128"
./convert 128
echo "./convert -128"
./convert -128
echo "./convert -129"
./convert -129
echo "./convert 42"
./convert 42
echo "./convert +42"
./convert +42
echo "./convert -42"
./convert -42
echo "./convert -0"
./convert -0
echo "./convert -214748364 -> can overflow a char to be 4, even though it should be impossible"
./convert -214748364 
echo "./convert -2147483648 (INT_MIN)"
./convert -2147483648
echo "./convert -2147483649 (INT_MIN -1)"
./convert -2147483649
echo "./convert 2147483647 (INT_MAX)"
./convert 2147483647
echo "./convert 2147483648 (INT_MAX +1)"
./convert 2147483648

echo "DOUBLES:\n"
echo "./convert 0.0"
./convert 0.0
echo "./convert +42.0"
./convert +42.0
echo "./convert 42.0"
./convert 42.0
echo "./convert -42.0"
./convert -42.0
echo "./convert -0.0"
./convert -0.0
echo "./convert 0.42"
./convert 0.42
echo "./convert 42.42"
./convert 42.42
echo "./convert +42.42"
./convert +42.42
echo "./convert -42.42"
./convert -42.42
echo "./convert -0.42"
./convert -0.42
echo "./convert -inf"
./convert -inf
echo "./convert inf"
./convert inf
echo "./convert +inf"
./convert +inf
echo "./convert nan"
./convert nan

echo "FLOATS:\n"
echo "./convert 0.0f"
./convert 0.0f
echo "./convert +42.0f"
./convert +42.0f
echo "./convert 42.0f"
./convert 42.0f
echo "./convert -42.0f"
./convert -42.0f
echo "./convert -0.0f"
./convert -0.0f
echo "./convert 0.42f"
./convert 0.42f
echo "./convert +42.42f"
./convert +42.42f
echo "./convert 42.42f"
./convert 42.42f
echo "./convert -42.42f"
./convert -42.42f
echo "./convert -0.42f"
./convert -0.42f
echo "./convert -inff"
./convert -inff
echo "./convert inff"
./convert inff
echo "./convert +inff"
./convert +inff
echo "./convert nanf"
./convert nanf


echo "Done.\n\n"