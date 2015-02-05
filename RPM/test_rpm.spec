Name: sample_rpm
Version: 1.0
Release: 1.0
Summary: Sample RPM package
Group: Development/Tools
License: GPL
URL: None
Source: test_rpm.tar.gz
BuildRoot: /usr/GIT/Test_project/rpmbuild/%{name}-%{%version}

%description
Test RPM package

%prep
%setup -n test_rpm

%install
rm -rf "$RPM_BUILD_ROOT"
mkdir -p "$RPM_BUILD_ROOT/opt/test_rpm"
cp -R * "$RPM_BUILD_ROOT/opt/test_rpm"

%files
/opt/test_rpm

%clean
rm -rf $RPM_BUILD_ROOT


