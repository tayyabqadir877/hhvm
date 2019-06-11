(**
 * Copyright (c) 2016, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the "hack" directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
*)

type index_builder_context = {
  repo_folder: string;
  sqlite_filename: string option;
  text_filename: string option;
  json_filename: string option;
  json_chunk_size: int;
  custom_service: string option;
  custom_repo_name: string option;
  include_builtins: bool;
}
