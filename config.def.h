/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT]   = "#2e3440", /* during input */
    [INPUT]  = "#9CAF88", /* after initialization */
    [FAILED] = "#B88678", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
