module;

#include <string>

export module cjk_segmenter;

import stl;
import hit;
import segmenter;
import analyze_context;
import ik_dict;

namespace infinity {

export class CJKSegmenter : public Segmenter {
public:
    static const std::wstring SEGMENTER_NAME;

    List<Hit *> tmp_hits_;

    Dictionary *dict_;

    CJKSegmenter();

    void Analyze(AnalyzeContext *context) override;

    void Reset() override;
};

} // namespace infinity