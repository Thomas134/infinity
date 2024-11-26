module;

export module hit;

import stl;

namespace infinity {

class DictSegment;
export class Hit {
public:
    static const int UNMATCH;
    static const int MATCH;
    static const int PREFIX;

    int hit_state_{UNMATCH};

    DictSegment *matched_dict_segment_ = nullptr;

    int begin_ = 0;

    int end_ = 0;

    bool IsMatch() const { return (hit_state_ & MATCH) > 0; }

    void SetMatch() { hit_state_ |= MATCH; }

    bool IsPrefix() const { return (hit_state_ & PREFIX) > 0; }

    void SetPrefix() { hit_state_ |= PREFIX; }

    bool IsUnmatch() const { return hit_state_ == UNMATCH; }

    void SetUnmatch() { hit_state_ = UNMATCH; }

    DictSegment *getMatchedDictSegment() const { return matched_dict_segment_; }

    void SetMatchedDictSegment(DictSegment *matched_dict_segment_);

    int GetBegin() const { return begin_; }

    void SetBegin(int begin) { begin_ = begin; }

    int GetEnd() const { return end_; }

    void SetEnd(int end) { end_ = end; }
};
} // namespace infinity