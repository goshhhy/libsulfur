project('libsulfur', 'c')
inc = include_directories('include')
xcb = dependency('xcb')
lib = library('sulfur', 'src/conn.c', 'src/graf.c', 'src/window.c', include_directories : inc, dependencies : xcb, install : true)
install_headers('include/sulfur/sulfur.h', 'include/sulfur/conn.h', 'include/sulfur/graf.h', 'include/sulfur/window.h', subdir : 'sulfur')

pkg = import('pkgconfig')
pkg.generate(lib)