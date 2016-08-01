// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class SourceContext;
@class SourceContextBuilder;



@interface SourceContextRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define SourceContext_file_name @"fileName"
@interface SourceContext : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasFileName_:1;
  NSString* fileName;
}
- (BOOL) hasFileName;
@property (readonly, strong) NSString* fileName;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (SourceContextBuilder*) builder;
+ (SourceContextBuilder*) builder;
+ (SourceContextBuilder*) builderWithPrototype:(SourceContext*) prototype;
- (SourceContextBuilder*) toBuilder;

+ (SourceContext*) parseFromData:(NSData*) data;
+ (SourceContext*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SourceContext*) parseFromInputStream:(NSInputStream*) input;
+ (SourceContext*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (SourceContext*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (SourceContext*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface SourceContextBuilder : PBGeneratedMessageBuilder {
@private
  SourceContext* resultSourceContext;
}

- (SourceContext*) defaultInstance;

- (SourceContextBuilder*) clear;
- (SourceContextBuilder*) clone;

- (SourceContext*) build;
- (SourceContext*) buildPartial;

- (SourceContextBuilder*) mergeFrom:(SourceContext*) other;
- (SourceContextBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (SourceContextBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFileName;
- (NSString*) fileName;
- (SourceContextBuilder*) setFileName:(NSString*) value;
- (SourceContextBuilder*) clearFileName;
@end


// @@protoc_insertion_point(global_scope)