/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                     /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int restrict_return = 0;		   /* -r option; if 1, disables shift-return and ctrl-return */
static int nostdin = 0;                    /* -n option, if 1, disable stdin, using dmenu only as text input */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12",
	"JoyPixels:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	              /*     fg         bg       */
	[SchemeNorm]    = { "#bbbbbb", "#222222" },
	[SchemeSel]     = { "#00a8f3", "#303030" },
	[SchemeSelOut]  = { "#70a8f3", "#383838" },
	[SchemeOut]     = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
