/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "gray",     /* after initialization */
	[INPUT] =  "#4b0088",   /* during input */
	[FAILED] = "red",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
