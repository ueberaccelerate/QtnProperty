# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.Core.Debug:
/Users/admin/Documents/projects/github/QtnProperty/build/Core/Debug/libCore.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/Core/Debug/libCore.a


PostBuild.QtnProperty.Debug:
/Users/admin/Documents/projects/github/QtnProperty/build/Debug/libQtnProperty.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/Debug/libQtnProperty.a


PostBuild.Core.Release:
/Users/admin/Documents/projects/github/QtnProperty/build/Core/Release/libCore.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/Core/Release/libCore.a


PostBuild.QtnProperty.Release:
/Users/admin/Documents/projects/github/QtnProperty/build/Release/libQtnProperty.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/Release/libQtnProperty.a


PostBuild.Core.MinSizeRel:
/Users/admin/Documents/projects/github/QtnProperty/build/Core/MinSizeRel/libCore.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/Core/MinSizeRel/libCore.a


PostBuild.QtnProperty.MinSizeRel:
/Users/admin/Documents/projects/github/QtnProperty/build/MinSizeRel/libQtnProperty.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/MinSizeRel/libQtnProperty.a


PostBuild.Core.RelWithDebInfo:
/Users/admin/Documents/projects/github/QtnProperty/build/Core/RelWithDebInfo/libCore.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/Core/RelWithDebInfo/libCore.a


PostBuild.QtnProperty.RelWithDebInfo:
/Users/admin/Documents/projects/github/QtnProperty/build/RelWithDebInfo/libQtnProperty.a:
	/bin/rm -f /Users/admin/Documents/projects/github/QtnProperty/build/RelWithDebInfo/libQtnProperty.a




# For each target create a dummy ruleso the target does not have to exist
