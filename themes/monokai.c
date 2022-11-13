static const char col_gray1[]       = "#282828"; // "#222222"
static const char col_gray2[]       = "#49483e"; // "#444444"
static const char col_gray3[]       = "#a1efe4"; // "#bbbbbb"
static const char col_gray4[]       = "#383830"; // "#eeeeee"
static const char col_cyan[]        = "#a6e22e"; // "#005577"
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};
