
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface NSURL (Extensions)

+ (NSString *)baseEndpoint NS_REFINED_FOR_SWIFT;

@end

static inline NSString *EndpointUrl(NSString *path) {
  return [NSURL.baseEndpoint stringByAppendingString:path];
}

NS_ASSUME_NONNULL_END
