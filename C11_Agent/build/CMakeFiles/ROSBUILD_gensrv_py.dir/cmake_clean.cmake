FILE(REMOVE_RECURSE
  "../srv_gen"
  "../src/C11_Agent/srv"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/C11_Agent/srv/__init__.py"
  "../src/C11_Agent/srv/_C11.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
