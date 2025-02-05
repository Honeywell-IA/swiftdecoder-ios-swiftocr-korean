//
//  KoreanRecognizer.h
//  OCRKorean
//
//  Created by Jenith Raja A, Mohamed on 19/11/24.
//

#import <Foundation/Foundation.h>
#import <MLKitTextRecognitionKorean/MLKitTextRecognitionKorean.h>
#import <MLKitTextRecognitionCommon/MLKTextRecognizer.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KoreanRecognizer : NSObject
-(MLKTextRecognizer *)getTextRecognizer;
-(NSString *)getProcessImageResult:(UIImage*)image;

@end

NS_ASSUME_NONNULL_END

