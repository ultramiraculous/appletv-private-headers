/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject {
	NSMutableArray *_dataBuffers;	// 4 = 0x4
	unsigned _offsetIntoFirstData;	// 8 = 0x8
	long long _curOffset;	// 12 = 0xc
	int _codePage;	// 20 = 0x14
	NSString *_parseErrorReason;	// 24 = 0x18
	BOOL _moreDataExpected;	// 28 = 0x1c
	int _dataGeneration;	// 32 = 0x20
	long long _expectedTotalBytesCount;	// 36 = 0x24
	long long _currentBytesReceivedCount;	// 44 = 0x2c
	unsigned _lastFoundBufferWithoutLineEnding;	// 52 = 0x34
	unsigned _numTokensInBuffersWithoutLineEndings;	// 56 = 0x38
	BOOL _lastLookedAtBufferHadStringEndPrefix;	// 60 = 0x3c
	BOOL _keepPreviousData;	// 61 = 0x3d
	NSMutableArray *_bypassedDataBuffers;	// 64 = 0x40
	NSFileHandle *_logFileHandle;	// 68 = 0x44
	NSString *_logFilePath;	// 72 = 0x48
	int _streamingState;	// 76 = 0x4c
}
@property(assign) int codePage;	// G=0x33a23349; S=0x33a2335d; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x33a23315; @synthesize=_curOffset
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x33a2345d; @synthesize=_currentBytesReceivedCount
@property(assign) int dataGeneration;	// G=0x33a233c9; S=0x33a233dd; @synthesize=_dataGeneration
@property(assign) long long expectedTotalBytesCount;	// G=0x33a233f5; S=0x33a23429; @synthesize=_expectedTotalBytesCount
@property(assign) BOOL keepPreviousData;	// G=0x33a234b1; S=0x33a234c9; @synthesize=_keepPreviousData
@property(assign) BOOL moreDataExpected;	// G=0x33a23399; S=0x33a233b1; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x33a23375; S=0x33a23389; @synthesize=_parseErrorReason
@property(assign, nonatomic) int streamingState;	// G=0x33a23491; S=0x33a234a1; @synthesize=_streamingState
+ (id)_logQueue;	// 0x33a21d31
- (id)init;	// 0x33a21d5d
- (void)_logBlobChunk:(id)chunk;	// 0x33a22c19
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x33a21f49
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x33a23151
- (void)addData:(id)data;	// 0x33a22d69
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x33a22ae9
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x33a2291d
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x33a2276d
- (id)bufferWithAllData;	// 0x33a22669
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x33a22fcd
// declared property getter: - (int)codePage;	// 0x33a23349
// declared property getter: - (long long)curOffset;	// 0x33a23315
- (unsigned char)currentByte;	// 0x33a22e41
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x33a2345d
// declared property getter: - (int)dataGeneration;	// 0x33a233c9
- (void)dealloc;	// 0x33a2215d
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x33a233f5
- (long)goodSizeForBuffer;	// 0x33a225e9
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x33a22211
- (void)invalidateBuffers;	// 0x33a2329d
// declared property getter: - (BOOL)keepPreviousData;	// 0x33a234b1
// declared property getter: - (BOOL)moreDataExpected;	// 0x33a23399
- (unsigned char)nextByte;	// 0x33a230c5
- (int)numTokensForNextOpaqueData;	// 0x33a23221
- (int)numTokensForNextString;	// 0x33a230dd
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x33a23235
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x33a222d1
// declared property getter: - (id)parseErrorReason;	// 0x33a23375
- (void)resetToZeroOffset;	// 0x33a22b01
// declared property setter: - (void)setCodePage:(int)page;	// 0x33a2335d
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x33a233dd
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x33a23429
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x33a234c9
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x33a233b1
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x33a23389
- (void)setShouldLog:(BOOL)log;	// 0x33a21da9
// declared property setter: - (void)setStreamingState:(int)state;	// 0x33a234a1
// declared property getter: - (int)streamingState;	// 0x33a23491
@end

