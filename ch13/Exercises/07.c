Chapter 13 Exercise 07.c Suppose that str is an array of
characters. Which one of the following statements is not
equivalent to the other three?

(a) *str = 0;
(b) str[0] = '\0';
(c) strcpy(str, "");
(d) strcat(str, "");

By @abe_SlimHacker

Answer: Statement d behaves diffrently. Because strcat appends a null character to the end of str.
