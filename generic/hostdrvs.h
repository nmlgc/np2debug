
typedef struct {
	char	fcbname[12];
	UINT	caps;
	UINT32	size;
	UINT32	attr;
	DOSDATE	date;
	DOSTIME	time;
} HDRVDIR;

typedef struct {
	HDRVDIR	di;
	char	realname[MAX_PATH];
} _HDRVLST, *HDRVLST;

typedef struct {
	HDRVDIR	di;
	char	path[MAX_PATH];
} HDRVPATH;


// �ꗗ�擾
LISTARRAY hostdrvs_getpathlist(const char *realpath);

// �z�X�g���̃t�@�C�����𓾂�
BOOL hostdrvs_getrealpath(HDRVPATH *hdp, char *dospath);

// �z�X�g���̃t�@�C���������
BOOL hostdrvs_newrealpath(HDRVPATH *hdp, char *dospath);

// �t�@�C���n���h�����X�g
void hostdrvs_fhdlreopen(LISTARRAY fhdl);
void hostdrvs_fhdlallclose(LISTARRAY fhdl);
HDRVFILE hostdrvs_fhdlsea(LISTARRAY fhdl);
