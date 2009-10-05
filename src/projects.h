
class CProjectManager
{
public:
	CProjectManager();
	
	void UpdateProjectsMenu();

	BString *CreateProject(const char *name);
	void OpenBuildScript(const char *path);
	
	void OpenProject(const char *path, bool allow_none_open=false);
	bool SaveProject();
	void ExitProjectMode();
	
	static const char *CProjectManager::GetProjectFile(const char *path, const char *filename);

	const char *GetCurrentProjectName()
		{ return fCurProject; }
	
private:
	char fCurProject[MAXPATHLEN];
	char fProjectPath[MAXPATHLEN];
};

// constants you can pass to GetProjectFile for filename param
#define P_BUILDSCRIPT		"buildscript"
#define P_LAYOUT			"silayout"