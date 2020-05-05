/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * Converted from https://github.com/facebook/react-native/blob/724fe11472cb874ce89657b2c3e7842feff04205/template/App.js
 * With a few tweaks
 */
open ReactNative;
open Store;
open CustomStyles;

[@bs.module "react-native/Libraries/Core/Devtools/openURLInBrowser"]
external openURLInBrowser: string => unit = "default";

module Header = {
  [@react.component] [@bs.module "react-native/Libraries/NewAppScreen"]
  external make: _ => React.element = "Header";
};
module ReloadInstructions = {
  [@react.component] [@bs.module "react-native/Libraries/NewAppScreen"]
  external make: _ => React.element = "ReloadInstructions";
};
module LearnMoreLinks = {
  [@react.component] [@bs.module "react-native/Libraries/NewAppScreen"]
  external make: _ => React.element = "LearnMoreLinks";
};
module DebugInstructions = {
  [@react.component] [@bs.module "react-native/Libraries/NewAppScreen"]
  external make: _ => React.element = "DebugInstructions";
};

[@react.component]
let app = () =>
  <AppStore.Provider store=appStore>
    <StatusBar barStyle=`darkContent />
    <SafeAreaView>
      <ScrollView
        contentInsetAdjustmentBehavior=`automatic style={styles##scrollView}>
        {Global.hermesInternal->Belt.Option.isNone
           ? React.null
           : <View style=styles##engine>
               <Text style=styles##footer>
                 "Engine: Hermes"->React.string
               </Text>
             </View>}
        <Header />
        <View style={styles##body}>
          <CounterReducer />
          <CounterReductive />
          <View style={styles##sectionContainer}>
            <Text style={styles##sectionTitle}>
              "See Your Changes"->React.string
            </Text>
            <Text style={styles##sectionDescription}>
              <ReloadInstructions />
            </Text>
          </View>
          <View style={styles##sectionContainer}>
            <Text style={styles##sectionTitle}> "Debug"->React.string </Text>
            <Text style={styles##sectionDescription}>
              <DebugInstructions />
            </Text>
          </View>
          <View style={styles##sectionContainer}>
            <Text style={styles##sectionTitle}>
              "Learn More"->React.string
            </Text>
            <Text style={styles##sectionDescription}>
              "Read the docs to discover what to do next:"->React.string
            </Text>
          </View>
          <View style={styles##sectionContainer}>
            <Text style={styles##sectionDescription}>
              <Text style={styles##highlight}>
                "Reason React Native"->React.string
              </Text>
            </Text>
            <TouchableOpacity
              onPress={_ =>
                openURLInBrowser(
                  "https://reasonml-community.github.io/reason-react-native/en/docs/",
                )
              }>
              <Text
                style=Style.(
                  style(
                    ~marginTop=8.->dp,
                    ~fontSize=18.,
                    ~fontWeight=`_400,
                    ~color=colors##primary,
                    (),
                  )
                )>
                "https://reasonml-community.github.io/\nreason-react-native/"
                ->React.string
              </Text>
            </TouchableOpacity>
          </View>
          <View style={styles##sectionContainer}>
            <Text style={styles##sectionDescription}>
              <Text style={styles##highlight}>
                "React Native"->React.string
              </Text>
            </Text>
          </View>
          <LearnMoreLinks />
        </View>
      </ScrollView>
    </SafeAreaView>
  </AppStore.Provider>;
