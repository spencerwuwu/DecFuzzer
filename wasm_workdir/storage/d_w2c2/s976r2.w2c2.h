#ifndef s976r2_H
#define s976r2_H

#include "w2c2_base.h"

typedef struct s976r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s976r2Instance;

void f0(s976r2Instance*);

void f1(s976r2Instance*);

U32 f2(s976r2Instance*);

void f3(s976r2Instance*,U32);

U32 f4(s976r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s976r2Instance*,U32,U32,U32,U32,U32);

void f6(s976r2Instance*,U32);

void f7(s976r2Instance*,U32,U32,U32);

void f8(s976r2Instance*,U32,U32,U32);

void s976r2____wasm_call_ctors(s976r2Instance*i);

void s976r2____wasm_apply_data_relocs(s976r2Instance*i);

U32 s976r2_func_1(s976r2Instance*i);

void s976r2_call_cb(s976r2Instance*i,U32 l0);

void s976r2Instantiate(s976r2Instance* instance, void* resolve(const char* module, const char* name));

void s976r2FreeInstance(s976r2Instance* instance);

#endif /* s976r2_H */

