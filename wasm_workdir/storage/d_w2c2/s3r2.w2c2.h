#ifndef s3r2_H
#define s3r2_H

#include "w2c2_base.h"

typedef struct s3r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s3r2Instance;

void f0(s3r2Instance*);

void f1(s3r2Instance*);

U32 f2(s3r2Instance*);

void f3(s3r2Instance*,U32);

U32 f4(s3r2Instance*,U32,U32,U32);

void f5(s3r2Instance*,U32,U32,U32,U32,U32);

void f6(s3r2Instance*,U32);

void f7(s3r2Instance*,U32,U32,U32);

void f8(s3r2Instance*,U32,U32,U32);

void s3r2____wasm_call_ctors(s3r2Instance*i);

void s3r2____wasm_apply_data_relocs(s3r2Instance*i);

U32 s3r2_func_1(s3r2Instance*i);

void s3r2_call_cb(s3r2Instance*i,U32 l0);

void s3r2Instantiate(s3r2Instance* instance, void* resolve(const char* module, const char* name));

void s3r2FreeInstance(s3r2Instance* instance);

#endif /* s3r2_H */

