	// Reference: https://en.wikipedia.org/wiki/ANSI_escape_code#SGR
	//
	// Quick note on C++ number prefixes
	//		int		char		
	//	Hex	0x...	\x...
	//  Oct	0...	\0...
	// 
	// Most of escape sequences here will use the ASCII escape character. 
	// char	Dec	Hex	Oct
	// ESC	27	1b	33
	// 
	// If the ESC is followed by a byte in the range 0x40 to 0x5F, the escape sequence is of type Fe.
	// We will be dealing with [ the Control Sequence Introducer or CSI; It starts most of the useful sequences.
	// This is why we see \x1b[ and \033[ written all over the place.
	// 
	// A CSI command is followed by any number (including none) of the following fields. Any missing numbers are treated as zero.
	//	"parameter bytes" in the range 0x30–0x3F, then
	//	"intermediate bytes" in the range 0x20–0x2F, then
	//	"final byte" in the range 0x40–0x7E.
	// 
	// To display colors we use the Select Graphic Rendition or SGR command denote by an 'm' at the end. 
	//	CSI ... m
	// 
	// In the "parameter bytes" field we put the code of the effect we want to apply. We can use numbers 0-177, however not all effects are always supported.
	//	CSI p m
	// 
	// If our effect code needs further specification we can use the "intermediate bytes" field and the "final byte" field, separated by semicolons.
	//	CSI p;i;f m
	// 
	//	
	// The final product would look like
	//	\033[pm  or  \033[p;i;fm
	// 
	// The effect will be applied to all text following the command until it is turn off by yet another another command.
	// 
	// 
	// SGR Color Paramenter
	// 
	// Ten's Place
	//				Normal	Bright
	//	Foreground	3		9
	//	Background	4		10
	// 
	// One's Place
	//	4-bit		0-7
	//	8-bit		8;5;n 
	//	24-bit		8;2;r;g;b	
	//	default		9
	// 
	// Notes:
	//	The default color can be buggy somtimes. you may want to use 0 (black) as your default
	//	n,r,g,b can each be valued 0-255
	//	



	
  
// implement as keywords
	string SGRcode = "36";
	string CSIcode = "\033[" + SGRcode + "m";
	cout << CSIcode << "Hello World!";
	
	// 4-bit background
	for (int i = 40; i <= 47; i++) {
		cout << "\033[" << i << "m" << " x" << "\033[40m";
	}


	// 4-bit bright background
	for (int i = 100; i <= 107; i++) {
		cout << "\033[" << i << "m" << " x" << "\033[40m";
	}
	cout << endl;

	//8-bit
	cout << "\033[48;5;107mhello world" << "\033[40m";

	//24-bit
	cout << "\033[48;2;105;27;226mhello world" << "\033[40m";
	

	// sample from stack overflow
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 10; j++) {
			int n = 10 * i + j;
			if (n > 107) break;
			printf("\033[%dm %3d\033[m", n, n);
		}
		printf("\n");
	}


