add_test( Part3.searchVideosWithNoAnswer /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosWithNoAnswer]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosWithNoAnswer PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosAndPlayAnswer /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosAndPlayAnswer]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosAndPlayAnswer PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosAnswerOutOfBounds /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosAnswerOutOfBounds]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosAnswerOutOfBounds PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosInvalidNumber /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosInvalidNumber]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosInvalidNumber PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosNoResults /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosNoResults]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosNoResults PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosWithTagNoAnswer /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosWithTagNoAnswer]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosWithTagNoAnswer PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosWithTagPlayAnswer /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosWithTagPlayAnswer]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosWithTagPlayAnswer PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosWithTagAnswerOutOfBounds /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosWithTagAnswerOutOfBounds]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosWithTagAnswerOutOfBounds PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Part3.searchVideosWithTagNoResults /Users/me/Desktop/google/google-code-sample/cpp/build/part3_test [==[--gtest_filter=Part3.searchVideosWithTagNoResults]==] --gtest_also_run_disabled_tests)
set_tests_properties( Part3.searchVideosWithTagNoResults PROPERTIES WORKING_DIRECTORY /Users/me/Desktop/google/google-code-sample/cpp/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( part3_test_TESTS Part3.searchVideosWithNoAnswer Part3.searchVideosAndPlayAnswer Part3.searchVideosAnswerOutOfBounds Part3.searchVideosInvalidNumber Part3.searchVideosNoResults Part3.searchVideosWithTagNoAnswer Part3.searchVideosWithTagPlayAnswer Part3.searchVideosWithTagAnswerOutOfBounds Part3.searchVideosWithTagNoResults)
