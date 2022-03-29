file(REMOVE_RECURSE
  "../../../libcommon_status.pdb"
  "../../../libcommon_status.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/common_status.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
