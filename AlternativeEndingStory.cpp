#include <iostream>
#include <string>

int main()
{
  int be = 0;
  int answer = 0;

  char begin[] = "Estaba caperucita en su casa cuando se le ocurrió pedirle permiso a su mamá para ir a visitar a su abuelita.\nFue, entonces a pedirle permiso y su mamá y ella le dijo...\n";

  char sta11[] = "Efectivamente, su mamá le dió permiso para ir a visitar a su abuelita... pero le dijo que además de la cesta con víveres tenía que llevar su abrigo porque hacia frio. Caperucita empezó a buscarlo pero no lo encontraba porque era muy desordenada. Asi que continuó buscándolo...Lo habrá encontrado?";

  char sta12[] = "Lamentablemente, su mamá no le dió permiso porque no había terminado sus tareas escolares y tampoco terminó de ordeno su habitación... sin embargo, le dijo que si terminaba con lo pendiente podía ir a donde su abuelita... terminó sus deberes Caperucita?";

  char sta21[] = "...Si! lo encontró estaba feliz porque iba a ir a la casa de su abuelita y además pudo encontrar su adorada caperuza roja que ella le habia regalado... asi que, se puso en camino y saliendo del pueblo se encontró con los dos caminos... uno el más seguro la llevaba a la casa de la abuelita tranquilamente y sin peligro... El otro, atravezaba el bosque y ciertamente era más corto pero también era más peligroso, se sabe que en el habita un lobo feroz que ya había hecho varias tropelías... entonces, esta el camino largo pero, claro le tomaría más tiempo llegar, y ya había perdido mucho tiempo buscando el abrigo... tomará el camilo largo y seguro? ";

  char sta22[] = "Después de varias horas buscando su caperuza finalmente la encontró en el lugar menos pensado, como sucede muchas veces en la vida, damos por sentado una situación y nos confiamos, al final se presenta la situación mas obvia que dabamos por descartada... en fin, Caperucita se pusó la querida caperuza roja, la canasta con víveres para su abuelita y salió de casa... viende que había perdido muchas horas decidió tomar la peor decisión, escogió ir por el bosque. Al cabo de un rato de caminata en la parte más oscura del bosque, dado que se había hecho tarde, le entró un pánico terrible y no le quedaba otra alternativa de seguir adelante. Continuaba con la caminata cuando de pronto entre los arbustos escucho un ruido extraño, aterrador y empezó a correr, la canasta quedó atrás en el camino y sintió que el lobo feroz venía a por ella y cada vez sentía su cercanía... ";

  char sta23[] = "No pudo encontrar su tan querida caperuza roja aquella que su abuelita le había hecho con tanto cariño. Ahora, además de no poder ir a visitarla se encontraba con la pena de no haberla encontrado, sin embargo, se propuso continuar con la búsqueda con la esperanza de encontrarla... la encontró? ";

  char sta24[] = "A pesar de que su mamá no le dió permiso Caperucita no hizo caso y se escabulló de su casa para ir a ver a su abuelita... Para que no la descubrieran rodeó el pueblo y se adentró en el bosque... el mismo que por el tiempo perdido se había hecho más oscuro y tenebroso.  La caminata continuaba y parecía no terminar nunca. Los caminos no parecían claros y no estaba segura de la ruta que estaba tomando. Cada minuto que pasaba se incrementaba su angustía y todo le parecía sospechoso... de pronto pudo ver un claro en el bosque y empezó a correr hacia el... estaba segura que era el prado en donde se encontraba la casa de la abuelita... cada paso estaba más cerca del final del bosque y sentía aunque con pena por haberse fugado de su casa, que al final valdría todo el poder salirse con la suya y que al fin y al cabo como era tan querida por todos, todo lo sucedido ameriraría una reprimenda pasajera porque se le perdonaría todo ya que al final no le habría pasado nada y la tendrían en casa... llegaría a casa sana y salva? ";

  char fine1[] = "Tomo la mejor decisión, el camino largo y seguro que si bien le tomaría más tiempo y más energías tenía muchas recompensas como los paisajes que vería cada kilómetro que avanzaba los que se perdería si atravezaría el tupido bosque. Después de algunas horas finalmente vió el claro donde se ubicaba la casa de la abuelita y con gran alegría comenzó a correr hacía ella. Fuera de la casa estaba su abuelita con na gran sonrisa viendo a Caperucita cada segundo más cerca. Finalmente, llegó, abrazó a su abuelita y ambas con gran felicidad entraron en la casa, compartiron una merienda con los víveres que Caperucita le había llevado y siguieron gozando de la compañía";

  char fine2[] = "Viendo que ya había perdido muchas horas buscando la caperuza roja, Caperucita decidió tomar el camino por el bosque. Al rato, viendo que no fue la mejor decisión se lamentó y deseaba poder regresar al camino seguro pero ya había avanzado mucho. Un par de kilómetros más adelantante pudo ver un camino con un cartel que le indicaba el retorno al camino seguro y sin la más mínima duda decidió enmendar el rumbo. Pronto ya se encontraba en el camino recomendable y avanzo con más tranquilidad apreciando los lindos paisajes que este camino le proveía. Al rato vío, por fin, la casa de su abuelita y con gran emocion corrió hacía ella. Llegó y tocó la puerta. Inmediatamente, su abuelita abrió la puerta y la abrazó con gran distención ya que estaba muy preocupada porque Caperucita no llegaba y temía lo peor. Al rato, abrieron la cesta y se pusieron a disfrutar de la merienda. Caperucita le contaba a su abuelita los detalles de la jornada y le juraba nunca más tomar una decisión apresurada, que todas sus decisiones las tomaría con mayor criterio y prevención, que tendría todas sus cosas organizadas para no perder tiempo que le privaba de gozar del camino además de ahorrarse angustias y preocupaciones.  Recordaba con todo sentido la frase lo que siempre le decía su mamá...'los caballos siempre van delante de la carreta'  ";

  char fine3[] = "Cuando ya sentía al lobo a punto de saltarle para atraparla sintíó un ruido fuertisimo, como un rayo... era la escopeta de un cazador que con un tiro certero dió cuenta del lobo que al parecer huyó herido de muerte... Esta milagrosa aparición la recordaría por siempre Caperucita quien después del hecho puedo llegar finalmente a la casa de la abuelita con vida aunque sin los víveres que tanto necesitada... Como era de esperarse, Caperucita había tomado la peor decisión de su vida; como en una pelicula a toda velocidad se la pasaba por la cabeza su falta de orden con sus cosas, su poca preocupación con el tiempo y sobre todo se reprochaba la mala decisión tomada y decía para sí lo que todos comprendemos después de un recorrido en la vida... no hay atajos !n ";

  char fine4[] = "Finalmente, encontró su adorada caperuza roja inmersa en el tremendo desorden en que se había convertido su habitación, realmente era una apilación caótica de cosas por todo el lugar. En ese momento con la alegría de la recuperación tomo cuenta de haber perdido la visita a su amada abuelita y pensó que de haber tenido mayor orden y preparación anticipada hubiera podido estar con su abuelita. Empezó a poner en orden todo y, quizás, con mayor anticipación y orden preparar la visita a la abuelita el día de mañana... o tal vez, en una fecha próxima... aprendió que es necesario estar preparada siempre y así no perder las oportunidades que se presentan siempre a lo largo de la vida. ";

  char fine5[] = "...se veía cada vez más cerca el claro y ya a unos pocos metros de esta terrible experiencia apareció en el medio de la luz la figura del lobo feroz... ella empezó inmediatamente a correr en sentido contrario y el lobo corriendo a toda velocidad tras ella... cada latido la distancia era más corta y finalmente, el lobo feroz extendió su garra y la atrapó atacándola sin piedad... toda la familia en su búsqueda se encontraron con la terrible y desgarradora realidad, la pena les embargo aquel día y no se iría de ellos por toda la vida...que poder decir de una situación como esta que no es ajena y algunas veces distante, solamente pensar que hay decisiones que nos pueden costar la vida... y la vida de otros";

  std::cout << "------------------------------------\n\n";

  // zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz

  // Begin
  std::cout << begin << "\n";

  // std::cout << "Stage 1\n";
  while (answer != 1 || answer != 2)
  {
    std::cout << "Le dió permiso su mamá?\t1) Si o 2)No ...";
    std::cin >> answer;
    std::cout << "   ";

    if (answer == 1)
    {
      std::cout << "\n"
                << sta11 << " ";
      be = 11;
      answer = 0;
      break;
    }
    else if (answer == 2)
    {
      // std::cout << answer << "...\";
      std::cout << sta12 << " ";
      be = 12;
      answer = 0;
      break;
    }
    else
    {
      std::cout << "Enter a valid answer...\n";
    }
  }

  // std::cout << ":::::::::::::::::::::::::::::::::::::::::::::\n";

  while (answer != 1 || answer != 2)
  {
    std::cout << "...\t1)Si or 2)No...";
    std::cin >> answer;
    std::cout << "   \n";

    if (be == 11 && answer == 1)
    {
      std::cout << sta21;
      be = 21;

      answer = 0;
      break;
    }
    else if (be == 11 && answer == 2)
    {
      std::cout << sta22;
      be = 22;

      answer = 0;
      break;
    }
    else if (be == 12 && answer == 1)
    {
      std::cout << sta23;
      be = 23;
      answer = 0;
      break;
    }
    else if (be == 12 && answer == 2)
    {
      std::cout << sta24;
      be = 24;
      answer = 0;
      break;
    }
    else
    {
      std::cout << "Enter a valid answer...\n";
    }
  }

  // std::cout << ":::::::::::::::::::::::::::::::::::::::::::::\n";

  // Stage 3
  // std::cout << "Stage 3\n";
  while (answer != 1 || answer != 2)
  {
    std::cout << " "
              << "\t1)Si or 2)No...";
    std::cin >> answer;
    std::cout << "   \n";

    // 21
    if (be == 21 && answer == 1)
    {
      std::cout << fine1;
      be = 31;
      answer = 0;
      break;
    }
    else if (be == 21 && answer == 2)
    {
      std::cout << fine2;
      be = 32;
      answer = 0;
      break;
    }
    else if (be == 22 && answer == 1)
    {
      std::cout << fine2;
      be = 32;
      answer = 0;
      break;
    }
    else if (be == 22 && answer == 2)
    {
      std::cout << fine3;
      be = 33;
      answer = 0;
      break;
    }
    else if (be == 23 && answer == 1)
    {
      std::cout << fine4;
      be = 33;
      answer = 0;
      break;
    }
    else if (be == 23 && answer == 2)
    {
      std::cout << fine4;
      be = 34;
      answer = 0;
      break;
    }
    else if (be == 24 && answer == 1)
    {
      std::cout << fine3;
      be = 34;
      answer = 0;
      break;
    }
    else if (be == 24 && answer == 2)
    {
      std::cout << fine5;
      be = 35;
      answer = 0;
      break;
    }
    else
    {
      std::cout << "Enter a valid answer.....!\n";
    }
  }

  // std::cout << ":::::::::::::::::::::::::::::::::::::::::::::\n";
}
