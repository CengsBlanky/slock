/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT]   = "#2e3440", /* after initialization */
    [INPUT]  = "#4C5a38", /* during input */
    [FAILED] = "#B88678", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Computer Locked";

/* text color */
static const char * text_color = "#e5e9f0";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-helvetica-bold-r-normal--34-240-100-100-p-182-iso8859-15";
