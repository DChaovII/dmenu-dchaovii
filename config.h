/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Mononoki Nerd Font:hinting=true:antialias=true:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
		     /*     fg         bg       */
	[SchemeNorm] = { "#cccccc", "#282A36" },
	[SchemeSel] = { "#ffffff", "#A77CFF" },
	[SchemeSelHighlight] = { "#A77CFF", "#282A36" },
	/* default #ffc978*/ 
	[SchemeNormHighlight] = { "#A77CFF", "#282A36" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 20;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
