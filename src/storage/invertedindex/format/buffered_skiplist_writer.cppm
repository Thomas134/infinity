module;

import stl;
import file_writer;
import file_reader;
import buffered_byte_slice;
import short_list_optimize_util;
import memory_pool;
export module buffered_skiplist_writer;

namespace infinity {

export class BufferedSkipListWriter : public BufferedByteSlice {
public:
    BufferedSkipListWriter(MemoryPool *byte_slice_pool, MemoryPool *buffer_pool);
    virtual ~BufferedSkipListWriter() = default;

    void AddItem(u32 delta_value1);

    void AddItem(u32 key, u32 value1);

    void AddItem(u32 key, u32 value1, u32 value2);

    void Dump(const SharedPtr<FileWriter> &file, bool spill = false);

    void Load(const SharedPtr<FileReader> &file);

private:
    static const u32 INVALID_LAST_KEY = (u32)-1;

    u32 last_key_;
    u32 last_value1_;
};

} // namespace infinity
