/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "DAEAS-Structs.h"

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
@property(assign) int codePage;	// G=0x3441fd7d; S=0x3441fd8d; @synthesize=_codePage
@property(readonly, assign) long long curOffset;	// G=0x3441fd49; @synthesize=_curOffset
@property(readonly, assign) long long currentBytesReceivedCount;	// G=0x3441fe7d; @synthesize=_currentBytesReceivedCount
@property(assign) int dataGeneration;	// G=0x3441fdf5; S=0x3441fe05; @synthesize=_dataGeneration
@property(assign) long long expectedTotalBytesCount;	// G=0x3441fe15; S=0x3441fe49; @synthesize=_expectedTotalBytesCount
@property(assign) BOOL keepPreviousData;	// G=0x3441fed1; S=0x3441fee1; @synthesize=_keepPreviousData
@property(assign) BOOL moreDataExpected;	// G=0x3441fdd5; S=0x3441fde5; @synthesize=_moreDataExpected
@property(retain) NSString *parseErrorReason;	// G=0x3441fd9d; S=0x3441fdb1; @synthesize=_parseErrorReason
@property(assign, nonatomic) int streamingState;	// G=0x3441feb1; S=0x3441fec1; @synthesize=_streamingState
+ (dispatch_queue_s *)_logQueue;	// 0x3441e56d
- (id)init;	// 0x3441e599
- (void)_logBlobChunk:(id)chunk;	// 0x3441f659
- (void)_moveLogFileContentsAtPath:(id)path;	// 0x3441e78d
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(BOOL)nextOpaqueDataCheckNumTokens;	// 0x3441fb95
- (void)addData:(id)data;	// 0x3441f79d
- (BOOL)advanceOffsetByAmount:(unsigned)amount;	// 0x3441f521
- (BOOL)advanceOffsetByAmount:(unsigned)amount retainLastToken:(BOOL)token;	// 0x3441f381
- (char *)bufferForLength:(unsigned)length shouldFree:(BOOL *)free;	// 0x3441f19d
- (id)bufferWithAllData;	// 0x3441f0b5
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned)currentByte;	// 0x3441fa09
// declared property getter: - (int)codePage;	// 0x3441fd7d
// declared property getter: - (long long)curOffset;	// 0x3441fd49
- (unsigned char)currentByte;	// 0x3441f879
// declared property getter: - (long long)currentBytesReceivedCount;	// 0x3441fe7d
// declared property getter: - (int)dataGeneration;	// 0x3441fdf5
- (void)dealloc;	// 0x3441eb45
// declared property getter: - (long long)expectedTotalBytesCount;	// 0x3441fe15
- (long)goodSizeForBuffer;	// 0x3441f035
- (BOOL)hasNumberOfTokensRemaining:(unsigned)tokensRemaining;	// 0x3441ebf9
- (void)invalidateBuffers;	// 0x3441fcd9
// declared property getter: - (BOOL)keepPreviousData;	// 0x3441fed1
// declared property getter: - (BOOL)moreDataExpected;	// 0x3441fdd5
- (unsigned char)nextByte;	// 0x3441fb0d
- (int)numTokensForNextOpaqueData;	// 0x3441fc5d
- (int)numTokensForNextString;	// 0x3441fb25
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)terminator;	// 0x3441fc71
- (int)numberOfBytesUntilStringEnd:(char *)bytesUntilStringEnd searchStringLength:(int)length acceptingBufferBits:(BOOL)bits;	// 0x3441ecbd
// declared property getter: - (id)parseErrorReason;	// 0x3441fd9d
- (void)resetToZeroOffset;	// 0x3441f539
// declared property setter: - (void)setCodePage:(int)page;	// 0x3441fd8d
// declared property setter: - (void)setDataGeneration:(int)generation;	// 0x3441fe05
// declared property setter: - (void)setExpectedTotalBytesCount:(long long)count;	// 0x3441fe49
// declared property setter: - (void)setKeepPreviousData:(BOOL)data;	// 0x3441fee1
// declared property setter: - (void)setMoreDataExpected:(BOOL)expected;	// 0x3441fde5
// declared property setter: - (void)setParseErrorReason:(id)reason;	// 0x3441fdb1
- (void)setShouldLog:(BOOL)log;	// 0x3441e5e5
// declared property setter: - (void)setStreamingState:(int)state;	// 0x3441fec1
// declared property getter: - (int)streamingState;	// 0x3441feb1
@end

