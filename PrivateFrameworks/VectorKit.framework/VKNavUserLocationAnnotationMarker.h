/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker {
    float _arrowBrightness;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _arrowColor;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _arrowColorStale;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _arrowRenderItem;
    struct shared_ptr<ggl::TextureAlphaMask::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _arrowShaderSetup;
    VKTimedAnimation *_billboardAnimation;
    float _billboardFactor;
    float _circleBrightness;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _circleRenderItem;
    struct shared_ptr<ggl::TextureWithBrightness::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _circleShaderSetup;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _gglPuckRenderState;
    float _greyPuckAlphaScale;
    BOOL _needsTextureUpdate;
    double _presentationCourse;
    BOOL _puckFlipped;
    double _puckOffset;
    struct { 
        struct { 
            double v[4][4]; 
        } arrowMatrix; 
        struct { 
            double v[4][4]; 
        } circleMatrix; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } arrowColor; 
    } _puckState;
    int _puckStyle;
    VKTimedAnimation *_puckStyleAnimation;
    float _scale;
    BOOL _shouldBillboard;
    BOOL _shouldShowCourse;
    double _sizePoints;
    BOOL _stale;
    int _style;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _textureArrow;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _textureCircle;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } innerColor;
@property (nonatomic) double presentationCourse;
@property (nonatomic) float scale;
@property (nonatomic) BOOL shouldBillboard;
@property (nonatomic) BOOL shouldShowCourse;
@property (getter=isStale, nonatomic) BOOL stale;
@property (nonatomic) int style;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updatePuckStyle;
- (void)_updateTexturesIfNeeded;
- (void)appendCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned int x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; const void*x19; unsigned int x20; void*x21; double x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; struct x32; void*x33; void*x34; void*x35; void*x36; void*x37; in void*x38; short x39; void*x40; int x41; void*x42; void*x43; void*x44; in void*x45; void*x46; void*x47; double x48; void*x49; void*x50; void*x51; BOOL x52; void*x53; void*x54; void*x55; void*x56; void*x57; const void*x58; void*x59; void*x60; char *x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; in void*x83; short x84; void*x85; int x86; void*x87; void*x88; void*x89; in void*x90; void*x91; void*x92; double x93; void*x94; void*x95; void*x96; BOOL x97; void*x98; void*x99; void*x100; void*x101; void*x102; const void*x103; void*x104; void*x105; char *x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; short x126; void*x127; void*x128; void*x129; const void*x130; void*x131; void*x132; BOOL x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; BOOL x143; void*x144; out void*x145; void*x146; void*x147; void*x148; void*x149; const void*x150; void*x151; void*x152; short x153; void*x154; short x155; void*x156; void*x157; void*x158; double x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; int x167; void*x168; const void*x169; void*x170; void*x171; void*x172; void*x173; double x174; void*x175; SEL x176; void*x177; SEL x178; void*x179; unsigned char x180; void*x181; out void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; in void*x189; double x190; void*x191; bool x192; void*x193; void*x194; void*x195; float x196; void*x197; float x198; void*x199; void*x200; void*x201; const void*x202; unsigned int x203; void*x204; double x205; void*x206; void*x207; void*x208; char *x209; void*x210; void*x211; void*x212; void*x213; void*x214; short x215; void*x216; void*x217; void*x218; double x219; void*x220; SEL x221; void*x222; SEL x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; SEL x231; void*x232; SEL x233; void*x234; void*x235; void*x236; long x237; void*x238; long x239; void*x240; out void*x241; BOOL x242; void*x243; void*x244; void*x245; void*x246; void*x247; out void*x248; const void*x249; void*x250; void*x251; void*x252; void*x253; double x254; void*x255; SEL x256; void*x257; SEL x258; void*x259; unsigned char x260; void*x261; out void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; in void*x269; double x270; void*x271; bool x272; void*x273; void*x274; void*x275; float x276; void*x277; float x278; void*x279; void*x280; void*x281; const void*x282; unsigned int x283; void*x284; double x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; struct x295; void*x296; void*x297; void*x298; void*x299; void*x300; in void*x301; short x302; void*x303; int x304; void*x305; void*x306; void*x307; in void*x308; void*x309; void*x310; double x311; void*x312; void*x313; void*x314; BOOL x315; void*x316; void*x317; void*x318; void*x319; void*x320; const void*x321; void*x322; void*x323; char *x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; }*)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3;
- (struct { float x1; float x2; float x3; float x4; })innerColor;
- (BOOL)isStale;
- (void)layoutWithContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)presentationCourse;
- (float)scale;
- (void)setInnerColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setModel:(id)arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setShouldBillboard:(BOOL)arg1;
- (void)setShouldShowCourse:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (BOOL)shouldBillboard;
- (BOOL)shouldShowCourse;
- (int)style;
- (void)updateWithStyleQuery:(const struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

@end
