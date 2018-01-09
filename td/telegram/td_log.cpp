//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2018
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#include "td/telegram/td_log.h"

#include "td/telegram/Log.h"

void td_set_log_file_path(const char *file_path) {
  td::Log::set_file_path(file_path == nullptr ? "" : file_path);
}

void td_set_log_max_file_size(long long max_file_size) {
  td::Log::set_max_file_size(static_cast<std::int64_t>(max_file_size));
}

void td_set_log_verbosity_level(int new_verbosity_level) {
  td::Log::set_verbosity_level(new_verbosity_level);
}