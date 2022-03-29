file(REMOVE_RECURSE
  "../../../libcommon_latency_recorder.pdb"
  "../../../libcommon_latency_recorder.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/common_latency_recorder.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
