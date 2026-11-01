#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

const char *SSID = "Erdem_ESP";
const char *password = "31012006";
WebServer sunucu(80);

void mainpage()
{
sunucu.send(200, "text/html", "<h1>Lorem ipsum dolor sit amet consectetur adipisicing elit. Quasi quia, velit ea quidem tenetur suscipit aspernatur dolores praesentium repellendus ab alias dolor dicta incidunt autem. Consequatur, molestias culpa sapiente saepe deserunt expedita consectetur minima repellendus ea? Unde ratione, atque pariatur vel reiciendis at expedita placeat, nemo deserunt distinctio dignissimos alias cum vitae saepe, necessitatibus quibusdam quidem! Ducimus praesentium impedit placeat assumenda ut animi sint sapiente suscipit dignissimos distinctio nihil atque quibusdam maxime adipisci, inventore aspernatur? Eligendi beatae unde, dicta qui amet consequatur, cumque distinctio corrupti dolor libero eveniet eius placeat, expedita possimus. At amet assumenda, vitae molestias consequuntur dolor voluptate in illum distinctio odio, rem placeat, labore provident itaque! Dolores atque labore commodi. Ea deserunt cumque, illo vitae dolorum blanditiis dolores dolore ad aliquid ducimus reprehenderit autem vel nostrum? Commodi error, tempora voluptatem velit repellendus sequi qui doloremque minus architecto vero quae est perspiciatis. Consequatur inventore ipsum dolor cumque. Mollitia tenetur animi rerum soluta itaque, ducimus fugiat non totam vitae incidunt, delectus ratione doloribus illum id corporis harum dolorem possimus aliquid? Praesentium ab qui voluptates cum tenetur, eaque vero quas magni obcaecati tempora quisquam quis nostrum iusto neque voluptate beatae sit, exercitationem odit consectetur? Quisquam dolorum laudantium sit exercitationem numquam velit quia corrupti adipisci aperiam commodi et ducimus, consectetur maiores a! Omnis alias quasi enim repudiandae atque deserunt. Tempore numquam, dicta fugit veniam, placeat voluptatibus voluptas qui laboriosam quia quos minus inventore quod consectetur labore consequatur earum sunt id recusandae illum sed voluptatem est? Voluptas illo maxime qui quis nam deleniti officia saepe dolorum quisquam explicabo officiis amet, distinctio perspiciatis quae inventore in dolores molestiae ab debitis dignissimos ad architecto laboriosam minima laudantium! Placeat natus cumque possimus quasi totam, asperiores iste necessitatibus quisquam fugit repellendus doloremque unde libero. Natus, assumenda laudantium fugiat a asperiores quos quas impedit illo necessitatibus at commodi quidem et, earum modi cum soluta distinctio optio placeat nemo quis tempora id? Iure rerum odit optio ipsum, sed magni! Aut nisi voluptatem necessitatibus quos a quasi harum nesciunt magni facilis fuga in adipisci deleniti earum inventore, consequuntur velit, placeat optio laudantium numquam itaque facere minima nam vel eos? Corporis culpa sequi illum deserunt porro possimus itaque dolore perferendis aspernatur numquam ipsa, illo incidunt assumenda sunt iste totam quasi aperiam, provident reprehenderit officia reiciendis neque animi eius quisquam. Error, autem. Quia, consequatur rem ipsa id quidem dignissimos eaque impedit rerum laborum natus dolorum deserunt enim quaerat maiores ab corporis ad animi quae inventore sequi labore? Nesciunt minus est, perspiciatis mollitia ad provident ipsa eos libero cum corporis pariatur corrupti temporibus neque quasi doloremque illum placeat delectus ea possimus at sequi ut. Id possimus ut ipsam consequatur non in nulla optio consequuntur quia, quidem fugit ad laudantium quibusdam rerum. Recusandae adipisci assumenda error nulla asperiores consequuntur corporis itaque doloribus unde suscipit dignissimos quis magnam sunt aspernatur veniam quod a beatae, sed temporibus dolores nisi? Eaque aliquid tempora vitae cupiditate non atque, reprehenderit at suscipit voluptas praesentium sunt ratione accusamus alias dignissimos necessitatibus ad fugiat eligendi reiciendis. Mollitia eaque autem quam tempora, tempore corporis ipsum cupiditate maiores recusandae voluptate ab soluta pariatur earum quia neque assumenda reprehenderit veritatis delectus laudantium libero voluptas placeat id debitis rem! Fuga sit neque sunt modi consequatur possimus quasi quis eveniet? Molestiae minima odio possimus blanditiis nemo facilis vitae est exercitationem officiis! Consequatur hic in cumque placeat sunt eligendi, vel vitae similique officia quidem atque ratione nostrum neque dolorem quisquam, nobis facilis. Natus accusantium delectus totam expedita sunt sed adipisci quisquam molestiae consequatur, ducimus doloribus omnis eveniet facilis doloremque harum necessitatibus suscipit, dolorum ratione similique amet sapiente cumque? Esse sequi, culpa neque voluptas molestias nemo quisquam odio eum eligendi? Provident, autem. Facilis aperiam ea quia veniam dignissimos consequuntur laudantium quibusdam fuga ab, cumque architecto, cum neque aut, mollitia saepe officiis eaque quo temporibus! Ea molestiae error dolor aliquid similique ab facere numquam, incidunt quasi veritatis tempora rem, dignissimos unde sequi aliquam beatae laboriosam libero quam eos veniam consequatur. Ad cupiditate doloribus vero explicabo eos fuga optio quia molestias? Dolor cum ab, esse odit recusandae aliquam, iure, maxime laboriosam eius veniam vero quasi officia! Maiores voluptatibus ex explicabo cum obcaecati, magni inventore dolor officia doloremque asperiores in. Fugit voluptates, autem deleniti officia accusantium cum enim inventore, dignissimos consequuntur officiis suscipit? Sapiente, animi totam. Nostrum nemo, hic quod doloremque voluptatem fugiat magnam totam reprehenderit autem, aliquid rerum temporibus voluptate, praesentium a deserunt neque maiores ipsam delectus accusantium similique. Ex ducimus, velit in incidunt, quaerat vitae quia harum assumenda quisquam modi omnis aut tenetur! Distinctio suscipit illo quidem. Reiciendis ab magnam architecto vel veritatis odit dolores quam sunt quaerat iusto quia unde perferendis voluptatum ipsam magni accusamus cum impedit sapiente earum quos, dignissimos, nemo autem quis. Repudiandae, exercitationem quidem voluptatibus consectetur nobis rem autem, quod veritatis molestias corporis ipsa quisquam omnis voluptatum odio dicta numquam minima vel! Nulla quia voluptatem saepe mollitia adipisci a soluta. Illum, temporibus enim. Recusandae iste quibusdam rem, quam repellendus adipisci reiciendis veniam tempore debitis aspernatur, aperiam fuga dignissimos, repudiandae ipsum esse. Quas, tempora earum. Et, neque ea voluptatem assumenda omnis qui odio aliquam tempore alias exercitationem, aut dolorem tempora laudantium numquam necessitatibus nam. Odit, nesciunt obcaecati. Repudiandae atque officiis voluptates quaerat illum maxime placeat suscipit doloribus eos facere quidem distinctio porro asperiores sequi temporibus repellendus corporis at ipsam odio soluta hic nihil nostrum, velit inventore? Ex officia quisquam numquam harum aspernatur consequuntur soluta porro id ullam atque optio laborum velit corporis qui praesentium quis illo minus nulla, doloribus maxime, libero sed commodi non. Odit omnis eveniet nobis vel autem adipisci sapiente voluptatum accusamus quibusdam commodi, quisquam impedit sunt culpa sint repellat eum dolorum aspernatur! Dignissimos reiciendis eligendi eveniet delectus quaerat aspernatur, repellendus atque iste consequatur, harum sit, alias culpa voluptate natus eum esse dolorem id deserunt. Sunt nulla sequi vel laudantium debitis cupiditate nemo at dolore nostrum modi totam praesentium natus libero, nihil odit sapiente unde, quasi quas repellat, vitae tempora ducimus animi ex reiciendis. Dignissimos quis neque voluptatibus nostrum, laboriosam ipsum provident, dolorem ullam voluptatum suscipit ab quas repellendus error minima, quos ea.</h1>");
}

void iletisim()
{
sunucu.send(200, "text/html", "<h1> Iletisim No: 0555 555 55 55</h1>");
}

void hakkinda()
{
  sunucu.send(200, "text/html", "<h1> Erdem 21 yasinda bursada yasiyor.</h1>"
  "<h1> Mehmet Ali 20 yasinda kutahyada yasiyor. </h1>");
}
void led_yak_fonk()
{
 sunucu.send(200, "text/html", "<h1> LED yaniyor</h1>");
 digitalWrite(2,HIGH);
}

void led_sondur_fonk()
{
  sunucu.send(200, "text/html", "<h1> LED Sondu</h1>");
  digitalWrite(2,LOW);
}

void bilinmeyen_sayfa_fonk()
{
  sunucu.send(200,"text/html", "<h1> 404</h1>");
}




void setup() {
  pinMode(2,OUTPUT); // 2 numaralı GPIO'yu çıkış yap.
  Serial.begin(115200);
  delay(300);
  Serial.println("Sunucu ornegi");
  WiFi.softAP(SSID, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("Erisim noktasi IP adresi: ");
  Serial.println(myIP);

  sunucu.on("/", mainpage);
  sunucu.on("/led_yak", led_yak_fonk);
  sunucu.on("/led_sondur", led_sondur_fonk);
  sunucu.on("/iletisim", iletisim);
  sunucu.on("/hakkinda", hakkinda);
  sunucu.onNotFound(bilinmeyen_sayfa_fonk);
  sunucu.begin();
}

void loop() {
  sunucu.handleClient();
}
