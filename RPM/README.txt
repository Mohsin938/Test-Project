Description:

Steps to create rpm package.

1. Create a directory ~/buildrpm in any location
2.To create RPM hierarchy: mkdir -p {RPMS,SRPMS,BUILD,SOURCE,SPECS,tmp}
3. Copy the source code to SOURCE and create a tarball
tar -xcvf test_rpm-1.0.tar.gz test
4.Create a .spec file in SPECS directory
same as test-rpm.spec file for reference
5. Run following command for creating rpm package
rpmbuild -bb -v test.spec
this will create a RPM package in RPMS/x86_64 directory.
6. To install this RPM package, execute:
rpm -ivh test-1.0-1.x86_64.rpm
7. To uninstall the RPM package,execute:
rpm -e test_rpm-1.0-1.x86_64.rpm
