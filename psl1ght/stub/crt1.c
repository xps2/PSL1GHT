int main(int argc, const char* argv[], const char* envp[]);

static const char* envp[] = {
	0
};

int _initialize(int argc, const char* argv[], int arg5, int arg6, int arg7)
{
	return main(argc, argv, envp);
}
