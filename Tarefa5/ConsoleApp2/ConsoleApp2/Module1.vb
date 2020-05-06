Imports System.IO
Module Module1

    Sub Main()
        Console.Write("User: ")
        Dim User As String = Console.ReadLine
        Console.Write("Passe:")
        Dim Passe As String = Console.ReadLine
        If Len(User) > 0 And Len(Passe) > 0 Then
            Try

                Dim fc As New StreamWriter(New FileStream("user.txt", FileMode.Create))
                Try
                    fc.Write(User)
                    fc.Write(";")
                    fc.Write(Passe)
                    fc.Write(";")

                Catch ex As Exception
                    Console.WriteLine("Erro na escrita. " & vbNewLine & ex.Message)
                End Try
                fc.Close()
            Catch ex As Exception
                Console.WriteLine("Erro ao criar o ficheiro!" & vbNewLine & ex.Message)
                Return
            End Try
        End If
        Console.Read()
    End Sub
End Module