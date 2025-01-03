// Copyright(C) 2024 InfiniFlow, Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

module;

module snapshot;

import stl;
import txn;
import query_context;
import table_entry;
import status;

namespace infinity {

Status Snapshot::CreateTableSnapshot(QueryContext *query_context, const String &snapshot_name, const String &table_name) {
//    Txn *txn_ptr = query_context->GetTxn();
//    const String &db_name = query_context->schema_name();
//    auto [table_entry, table_status] = txn_ptr->GetTableByName(db_name, table_name);

    return Status::OK();
}

Status Snapshot::RestoreTableSnapshot() { return Status::OK(); }
Status Snapshot::DropSnapshot(QueryContext *query_context, const String &snapshot_name) { return Status::OK(); }

} // namespace infinity