/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CPPDFGraphicState *CPPDFGraphicStateRef;

typedef struct CGPDFContentStream *CGPDFContentStreamRef;

typedef struct PrimitiveBuffer {
	void *data;
	void *pos;
	void *limit;
	unsigned size;
	unsigned previousSize;
	unsigned count;
	unsigned previousCount;
	int index;
} PrimitiveBuffer;

typedef struct CPPDFClipBuffer {
	unsigned top;
	unsigned currentIndex;
	unsigned *data;
	unsigned size;
} CPPDFClipBuffer;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct CGColorSpace *CGColorSpaceRef;
typedef union CGPDFObject CGPDFObject;
typedef struct CGColor *CGColorRef;
@class CPFont;
typedef struct CPPDFStyle {
	CGColorRef _field1;
	CGColorSpaceRef _field2;
	CGColorRef _field3;
	CGColorSpaceRef _field4;
	float _field5;
	float _field6;
	unsigned char _field7;
	unsigned char _field8;
	int _field9;
	float _field10;
	CPFont *_field11;
	float _field12;
	CGPDFObject *_field13;
	CGPDFObject *_field14;
	CGColorRef _field15;
	struct CPPDFStyle *_field16;
} CPPDFStyle;

typedef struct CGPath *CGPathRef;

typedef struct CPPDFContext {
	CGRect _field1;
	unsigned _field2;
	CPPDFGraphicStateRef _field3;
	CPPDFGraphicStateRef _field4;
	CGPDFContentStreamRef _field5[250];
	unsigned _field6;
	PrimitiveBuffer _field7;
	PrimitiveBuffer _field8;
	PrimitiveBuffer _field9;
	CPPDFClipBuffer _field10;
	CFDictionaryRef _field11;
	CFDictionaryRef _field12;
	CFDictionaryRef _field13;
	CPPDFStyle *_field14;
	int *_field15;
	unsigned _field16;
	unsigned _field17;
	unsigned _field18;
	int _field19;
	int _field20;
	int _field21;
	unsigned *_field22;
	CGPathRef *_field23;
	BOOL _field24;
} CPPDFContext;

typedef struct CGPDFPage *CGPDFPageRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct CGPDFLayout *CGPDFLayoutRef;

typedef struct CPPDFObject {
	CGRect bounds;
	unsigned clipIndex;
	unsigned insertionOrder;
} CPPDFObject;

typedef struct CGPDFStream *CGPDFStreamRef;

typedef struct CGImage *CGImageRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct CGPDFDictionary *CGPDFDictionaryRef;

struct CGColor;

typedef struct CPPDFImage {
	CPPDFObject _field1;
	unsigned _field2;
	CGPDFStreamRef _field3;
	int _field4;
	CGImageRef _field5;
	CGAffineTransform _field6;
	CGPDFDictionaryRef _field7;
	float _field8;
	CGColorRef _field9;
} CPPDFImage;

typedef struct CPPDFShape {
	CPPDFObject _field1;
	unsigned _field2;
	CPPDFStyle *_field3;
	int _field4;
	CGPathRef _field5;
	BOOL _field6;
	CGAffineTransform _field7;
	CGAffineTransform _field8;
} CPPDFShape;

typedef struct __CFArray *CFArrayRef;

typedef struct CGPDFSelection *CGPDFSelectionRef;

typedef struct {
	int location;
	int length;
} XXStruct_ny2fMB;

typedef struct {
	CGRect _field1;
	CGColorRef _field2;
	unsigned _field3;
	CPGraphicObject **_field4;
} XXStruct_De2_4C;

typedef struct {
	unsigned _field1;
	unsigned _field2;
	int _field3;
	int _field4;
	CGRect _field5;
} XXStruct_NaTu4D;

@class CPChunk;
typedef struct CPInlineContainer {
	unsigned _field1;
	CPChunk *_field2;
	struct CPInlineContainer *_field3;
} CPInlineContainer;

struct CGColorSpace;

typedef struct CGPDFFont *CGPDFFontRef;

typedef struct CGFont *CGFontRef;

typedef struct {
	float fontStretch;
	float fontWeight;
	unsigned flags;
	CGRect fontBBox;
	float italicAngle;
	float ascent;
	float descent;
	float leading;
	float capHeight;
	float xHeight;
	float stemV;
	float stemH;
	float avgWidth;
	float maxWidth;
	float missingWidth;
	float spaceWidth;
	float underlinePosition;
	float underlineThickness;
} XXStruct_FvSZlC;

typedef struct CPPDFChar {
	CPPDFObject _field1;
	unsigned short _field2;
	unsigned short _field3;
	CGPoint _field4;
	CGSize _field5;
	CPPDFStyle *_field6;
	float _field7;
	int _field8;
} CPPDFChar;

typedef struct {
	double _field1;
	unsigned _field2;
	double _field3;
	double _field4;
	unsigned _field5;
	double _field6;
	double _field7;
	BOOL _field8;
	double _field9;
	double _field10;
	double _field11;
	double _field12;
	double _field13;
	double _field14;
	double _field15;
	double _field16;
	double _field17;
	double _field18;
	double _field19;
	BOOL _field20;
} XXStruct_lVmCAC;

typedef struct {
	unsigned _field1;
	double _field2;
	double _field3;
	double _field4;
} XXStruct_VnwizD;

typedef struct {
	unsigned _field1;
	CGRect _field2;
} XXStruct_0P0XxC;

typedef struct __CFData *CFDataRef;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	int _field5;
	int *_field6;
	CPPDFStyle *_field7;
} XXStruct_pkaZhB;

typedef struct __CFString *CFStringRef;

typedef struct CPListInfo {
	unsigned _field1;
	unsigned _field2;
	CGRect _field3;
	CFStringRef _field4;
	int _field5;
	unsigned _field6;
	unsigned _field7;
	int _field8;
	bool _field9;
	bool _field10;
	bool _field11;
	void *_field12;
} CPListInfo;

struct {};

@class CPTextLine;
typedef struct {
	CPTextLine *_field1;
	unsigned _field2;
	CGPoint *_field3;
} XXStruct_OVeKqA;

typedef struct {
	CGRect _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	unsigned _field6;
	unsigned _field7;
	unsigned _field8;
	unsigned _field9;
	unsigned _field10;
	unsigned _field11;
	unsigned _field12;
	unsigned _field13;
	unsigned _field14;
	CGPoint _field15;
	CGPoint _field16;
	CGPoint _field17;
	CGPoint _field18;
	float _field19;
	float _field20;
	BOOL _field21;
	BOOL _field22;
	BOOL _field23;
} XXStruct_cUngNA;

typedef struct CGPDFDocument *CGPDFDocumentRef;

typedef struct CGContext *CGContextRef;

struct CGContext;


