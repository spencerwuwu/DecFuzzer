#ifndef s21retdec_H
#define s21retdec_H

#include "w2c2_base.h"

typedef struct s21retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s21retdecInstance;

void f0(s21retdecInstance*);

void f1(s21retdecInstance*);

U32 f2(s21retdecInstance*);

void f3(s21retdecInstance*,U32);

U32 f4(s21retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s21retdecInstance*,U32,U32,U32,U32,U32);

void f6(s21retdecInstance*,U32);

void f7(s21retdecInstance*,U32,U32,U32);

void f8(s21retdecInstance*,U32,U32,U32);

void s21retdec____wasm_call_ctors(s21retdecInstance*i);

void s21retdec____wasm_apply_data_relocs(s21retdecInstance*i);

U32 s21retdec_func_1(s21retdecInstance*i);

void s21retdec_call_cb(s21retdecInstance*i,U32 l0);

void s21retdecInstantiate(s21retdecInstance* instance, void* resolve(const char* module, const char* name));

void s21retdecFreeInstance(s21retdecInstance* instance);

#endif /* s21retdec_H */

