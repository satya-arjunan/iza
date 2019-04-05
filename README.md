
<img src="Iza.png" width="512">


Build on Ubuntu
---------------
1. sudo apt install qtcreator qtdeclarative5-dev qtmultimedia5-dev qtbase5-private-dev libqt5xmlpatterns5-dev libqt5svg5-dev libqt5webenginewidgets5 qtwebengine5-dev qtscript5-dev qttools5-dev libxt-dev libqt5x11extras5-dev
2. sudo apt install libcurl4-openssl-dev libssl-dev
3. sudo apt remove cmake
4. sudo pip install --upgrade cmake
5. export PATH=/usr/local/bin:$PATH
6. sudo apt install gfortran libqtwebkit-dev qt4-default
7. git clone git@github.com:/satya-arjunan/iza.git
8. cd iza
9. mkdir build
10. cd build
11. cmake -DQt5_DIR=/usr/lib/qt5 -DCMAKE_BUILD_TYPE:STRING=Debug -DSlicer_USE_SYSTEM_OpenSSL=1 -DSlicer_USE_SYSTEM_curl:BOOL=1 ../
12. make -j2
13. ./Slicer-build/Iza
